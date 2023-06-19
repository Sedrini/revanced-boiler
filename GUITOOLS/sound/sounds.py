import pygame
import os 

def play_sound(name):
    current_dir = os.path.dirname(os.path.realpath(__file__))
    sound_file = os.path.join(current_dir, name)
    pygame.mixer.music.load(sound_file)
    pygame.mixer.music.play(-1)  # -1 indicates infinite loop

def stop_sound():
    pygame.mixer.music.stop()

pygame.mixer.init()
pygame.mixer.quit()