#include <SFML/Audio.h>
#include <SFML/Graphics.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow* window;
	sfTexture* texture;
	sfSprite* sprite;
	sfFont* font;
	sfText* text;
	sfMusic* music;
	sfEvent event;
	sfVector2f position = {0, 225};
	sfVector2f position2 = {785, 225};
	sfRectangleShape* rect;
	sfRectangleShape* rect2;
	sfColor colorRed = {255, 10, 10, 255};
	sfColor colorBlue = {10, 10, 255, 255};
	sfVector2f size = {15, 150};
	/* Create the main window */
	window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
	if (!window)
		return 0;
	rect = sfRectangleShape_create();
	sfRectangleShape_setSize(rect, size);
	sfRectangleShape_setFillColor(rect, colorRed);
	sfRectangleShape_setPosition(rect, position);
	
	rect2 = sfRectangleShape_create();
	sfRectangleShape_setSize(rect2, size);
	sfRectangleShape_setPosition(rect2, position2);
	sfRectangleShape_setFillColor(rect2, colorBlue);
	/* Start the game loop */
	while (sfRenderWindow_isOpen(window))
	{
		/* Process events */
		while (sfRenderWindow_pollEvent(window, &event))
		{
			
			/* Close window : exit */
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
			if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp) {
				position.y = position.y - 10;
			        sfRectangleShape_setPosition(rect, position);
			} else if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown) {
				position.y = position.y + 10;
			        sfRectangleShape_setPosition(rect, position);
			}
		}
		/* Clear the screen */
		sfRenderWindow_clear(window, sfBlack);
		sfRenderWindow_drawRectangleShape(window, rect2, NULL);
		sfRenderWindow_drawRectangleShape(window, rect, NULL);
		/* Update the window */
		sfRenderWindow_display(window);
	}
	/* Cleanup resources */
	sfRectangleShape_destroy(rect);
	sfRectangleShape_destroy(rect2);
	sfRenderWindow_destroy(window);
	return 0;
}
