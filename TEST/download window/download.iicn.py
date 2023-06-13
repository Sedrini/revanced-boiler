import PySimpleGUI as sg
import requests
import os

def download_files():
    documents_folder = r'C:\Users\Adrik_77\Documents\Test'
    url = 'https://github.com/revanced/revanced-patches/releases/download/v2.176.0-dev.2/revanced-patches-2.176.0-dev.2.jar'
    filename = 'file1.jar'

    full_path = os.path.join(documents_folder, filename)
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

            for chunk in r.iter_content(chunk_size=81922):
                if chunk:
                    f.write(chunk)
                    bytes_downloaded += len(chunk)
                    window['-PROGRESS-'].Update(bytes_downloaded)
                    window.refresh()

            window.close()

# Inicia la descarga de archivos
download_files()
