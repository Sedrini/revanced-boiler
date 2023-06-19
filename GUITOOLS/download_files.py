import requests
from tqdm import *
import os
import win32api
import PySimpleGUI as sg
from Api_info import download_url
from pathz import paths
from ping import estatus


def download_files():
    documents_folder = paths()[1]
    patches_url, patches_name, cli_url, cli_name, integrations_url, integrations_name, file_list = download_url()

    documents_folder = documents_folder / 'Tools'
    downloads = [
        (patches_url, documents_folder, patches_name + '.jar'),
        (cli_url, documents_folder, cli_name + '.jar'),
        (integrations_url, documents_folder, integrations_name + '.apk'),
    ]

    for url, path, filename in downloads:
        full_path = os.path.join(path, filename)
        with requests.get(url, stream=True) as r:
            r.raise_for_status()
            with open(full_path, 'wb') as f:
                file_size = int(r.headers['Content-Length'])
                bytes_downloaded = 0

                layout = [
                    [sg.Text('Progreso de descarga:')],
                    [sg.ProgressBar(max_value=file_size, orientation='h', size=(30, 20), key='-PROGRESS-')],
                ]

                window = sg.Window('Descarga de archivos', layout, finalize=True)

                for chunk in r.iter_content(chunk_size=8192):
                    if chunk:
                        f.write(chunk)
                        bytes_downloaded += len(chunk)
                        window['-PROGRESS-'].Update(bytes_downloaded)
                        window.refresh()

                

                window.close()

    sg.popup('Descarga completada', 'Archivos',patches_name,cli_name,integrations_name)

def download_one_file(url,ext):
    documents_folder = paths()[1]

    documents_folder = documents_folder / 'Tools'
    downloads = [
        (url, documents_folder, ext),
    ]

    for url, path, filename in downloads:
        full_path = os.path.join(path, filename)
        with requests.get(url, stream=True) as r:
            r.raise_for_status()
            with open(full_path, 'wb') as f:
                file_size = int(r.headers['Content-Length'])
                bytes_downloaded = 0

                layout = [
                    [sg.Text('Progreso de descarga:')],
                    [sg.ProgressBar(max_value=file_size, orientation='h', size=(30, 20), key='-PROGRESS-')],
                ]

                window = sg.Window('Descarga de archivos', layout, finalize=True)

                for chunk in r.iter_content(chunk_size=8192):
                    if chunk:
                        f.write(chunk)
                        bytes_downloaded += len(chunk)
                        window['-PROGRESS-'].Update(bytes_downloaded)
                        window.refresh()

                window.close()

    sg.popup('Descarga completada', 'Archivo descargado:', filename)

def check_files():
    create_folder()
    #paths
    folders = paths()
    estatos = estatus()    
    if estatos == 'Online':
        file_list = download_url()[6]
        for file in file_list:
            if not os.path.exists(os.path.join(folders[3], file)):
                try:
                    download_files()
                except:
                    None
            else:
                None
        
        sg.popup('No updates |avalibles|')
    else:
        None

def create_folder():
    folders = paths()

    for folder in folders[1:]:
        if not os.path.exists(folder):
            os.makedirs(folder)

            file_path = folder / "my_file.txt"
            if os.path.exists(file_path):
                win32api.SetFileAttributes(str(file_path), win32api.FILE_ATTRIBUTE_NORMAL)


