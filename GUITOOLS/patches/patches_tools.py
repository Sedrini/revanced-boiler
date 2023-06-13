import os
import sys
# Obtener el directorio actual donde se encuentra el archivo en ejecución
current_directory = os.path.dirname(os.path.abspath(__file__))
# Agregar el directorio actual al PYTHONPATH
sys.path.append(current_directory)
# Ahora puedes importar el módulo 'Api_response'
from Api_response import api_requests

# PATCHES Compability YOUTUBE
def youtube_patches():
    response_patches, _ = api_requests()

    youtube_patches = []
    
    def count():
        patches_num = 0
        application = application
        for item in response_patches:
            if len(item['compatiblePackages']) > 0 and item['compatiblePackages'][0]['name'] == application:
                print(item['name'])
                youtube_patches.append(item['name'])
                patches_num += 1
                
            else:
                None
        print(len(youtube_patches))


#count patches and print them is a row(for i, ite3)
def count_patches(application):
        response_patches, _ = api_requests()

        count_patches = []
        for item in response_patches:
            if len(item['compatiblePackages']) > 0 and item['compatiblePackages'][0]['name'] == application:
                count_patches.append(item['name'])

                
            else:
                None
        
        for i, ite3 in enumerate(count_patches, start=1):
            print(f'{i} --{ite3}')

count_patches('com.google.android.youtube')