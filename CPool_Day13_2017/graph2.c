#include <SFML/Audio.h>
#include <SFML/Graphics.h>

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
	/* Create the main window */
	window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
	if (!window)
		return 0;
	/* Load a sprite to display */
	texture = sfTexture_createFromFile("cute_image.jpg", NULL);
	if (!texture)
		return 0;
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	/* Create a graphical text to display */
	font = sfFont_createFromFile("arial.ttf");
	if (!font)
		return 0;
	text = sfText_create();
	sfText_setString(text, "Hello SFML");
	sfText_setFont(text, font);
	sfText_setCharacterSize(text, 50);
	/* Load a music to play */
	music = sfMusic_createFromFile("nice_music.ogg");
	if (!music)
		return 0;
	/* Play the music */
	sfMusic_play(music);
	/* Start the game loop */
	while (sfRenderWindow_isOpen(window))
	{
		/* Process events */
		while (sfRenderWindow_pollEvent(window, &event))
		{
			/* Close window : exit */
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
		/* Clear the screen */
		sfRenderWindow_clear(window, sfBlack);
		/* Draw the sprite */
		sfRenderWindow_drawSprite(window, sprite, NULL);
		/* Draw the text */
		sfRenderWindow_drawText(window, text, NULL);
		/* Update the window */
		sfRenderWindow_display(window);
	}
	/* Cleanup resources */
	sfMusic_destroy(music);
	sfText_destroy(text);
	sfFont_destroy(font);
	sfSprite_destroy(sprite);
	sfTexture_destroy(texture);
	sfRenderWindow_destroy(window);
	return 1;
}
