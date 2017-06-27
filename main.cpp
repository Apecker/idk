v#include <stdio.h>

#include <stdlib.h>


#include <SDL/SDL.h>

#include <SDL/SDL_image.h>


#include "jeu.h"

#include "constantes.h"



using namespace std;


int main ()

{

    //création des surfaces et des noms de positions

    SDL_Surface *ecran = NULL, *menu = NULL, *debut = NULL;

    SDL_Rect positionMenu;




    // positionnement des images

    // menu

    positionMenu.x = 0;

    positionMenu.y = 0;





    // création des evenements


    // principal :

    SDL_Event event;




    // integer pour la boucle infinie
    int continuer = 1;




    // initialize SDL video

    SDL_Init(SDL_INIT_VIDEO);






    // icone (a mettre après)







    // create a new window

    SDL_Surface* screen = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);





    // load an image

    menu = IMG_Load("menu.png");

    SDL_BlitSurface(menu, NULL, ecran, &positionMenu);


    SDL_Flip(ecran);





    // program main loop

    while (continuer)
        {
            SDL_WaitEvent(&event);
            switch(event.type)
            {
                case SDL_QUIT:
                    continuer = 0;
                    break;
                case SDL_KEYDOWN:
                    switch(event.key.keysym.sym)
                    {
                        case SDLK_ESCAPE: // Veut arrêter le jeu
                            continuer = 0;
                            break;
                        case SDLK_KP1: // Demande à jouer
                            jouer(ecran);
                            break;
                    }
                    break;
            }

            // Effacement de l'écran
            SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
            SDL_BlitSurface(menu, NULL, ecran, &positionMenu);
            SDL_Flip(ecran);
        }


    // free loaded bitmap

    SDL_FreeSurface(debut);


	// etteinte de la SDL
    SDL_Quit();




    // all is well ;)

    printf("Exited cleanly\n");


    return 0;
}
