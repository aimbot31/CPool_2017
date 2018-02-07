/*
** EPITECH PROJECT, 2017
** Graph
** File description:
** Desc
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stddef.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector2.h>
#include <SFML/Config.h>


int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfVector2f size = {100, 100};
    sfRenderWindow* window;
    sfEvent event;
    framebuffer_t f;
    sfTexture* texture;
    sfSprite* sprite;
    sfRectangleShape* rect;
    sfColor color = {255, 0, 0, 255};
    
    //f.size = mode.width * mode.height * 4;
    //f.pixel = malloc(f.size);
    //put_pixel(&f, 100, 100, sfColor_fromRGBA(255, 0, 0, 255));
    
    window = sfRenderWindow_create(mode, "TEST", sfResize | sfClose, NULL);
    if (!window)
        return 84;
    
    
     while (sfRenderWindow_isOpen(window))
    {

        while (sfRenderWindow_pollEvent(window, &event))
        {

            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
	rect = sfRectangleShape_create();
	sfRectangleShape_setSize(rect, size);
	sfRectangleShape_setFillColor(rect, color);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
