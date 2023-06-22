import PySimpleGUI as sg
import subprocess
import threading
import os
from GUITOOLS.Api_info import download_url,paths
import json
from tkinter import filedialog
from tkinter import *


def show_custom_popup(name_apk,patched_folder):
        layout = [
            [sg.Text(f'Patched app: {name_apk}')],
            [sg.Text(f'Patched folder: {patched_folder}')],
            [sg.Button('Patched folder', key='-pfolder-')
             ], 

             ]
        

        window = sg.Window('Patched about', layout)

        while True:
            event, _ = window.read()

            if event in (sg.WINDOW_CLOSED, 'Botón 1', 'Botón 2'):
                break
            
            if event in (sg.WINDOW_CLOSED, '-pfolder-'):
               subprocess.run(['explorer', patched_folder]) 
            

        window.close()

def seleccionar_archivo():
    root = Tk()
    root.withdraw()
    root.attributes("-topmost", True)  # Set the window attributes to stay on top
    archivo = filedialog.askopenfilename(filetypes=(("Archivos apk", "*.apk"),))
    root.destroy()  # Destroy the window after selecting the file
    return archivo

def apk_name(option, profile):
    file = seleccionar_archivo()
    folders = paths()
    patched_folder= folders[2]

    i = 1

    if file == "":
        sg.popup('EMPTY FILE')
    else:   
        if option == 'Youtube': name_apk = 'ReYoutube.apk' 
        if option == 'Youtube Music': name_apk = 'ReInstagram.apk'
        if option == 'Tiktok': name_apk = 'ReTikTok.apk'
        if option == 'Twitter': name_apk = 'ReTwitter.apk'
        if option == 'Twitch': name_apk = 'ReTwitch.apk'
        if option == 'Other': name_apk = 'ReCustom.apk'
        if option == '': None

        temp_name = name_apk

        while os.path.exists(patched_folder / name_apk):
            i = int(i)
            i = i+1
            i = str(i)
            name_apk = i+name_apk
        else:
            pass
        i = str(i)
        temp_name = i+temp_name       

        pathcer_name(option, file, temp_name, profile)

def pathcer_name(option, file, name_apk, profile):
    #RETURNS
    folders = paths()
    Tools_folder = folders[3]
    file_list = download_url()[6]
    patched_folder= folders[2]

    apk_output = patched_folder / name_apk

    # commands from- this is what subprocess process 
    # Idk how to make them change when apply the new screen for configuration, i was thinking of making profiles.
    apk_output = patched_folder / name_apk

    if profile == 'Custom' and option == 'Youtube':
        custom_patch(option, file, name_apk, profile,apk_output)
    else:

        command_map = {
            'Youtube': f"java -jar {file_list[1]} -a {file} -b {file_list[0]} -m {file_list[2]} -e always-autorepeat -e custom-video-buffer -e debugging -e downloads -e hide-my-mix -o {apk_output} -c",
            'Youtube Music': f"java -jar {file_list[1]} -a {file} -b {file_list[0]} -m {file_list[2]} -o {apk_output} -c",
            'Tiktok': f"java -jar {file_list[1]} --exclusive --experimental -a {file} -b {file_list[0]} -m {file_list[2]} -i feed-filter -i hide-ads -i playback-speed -i settings -i show-seekbar -i sim-spoof -o {apk_output} -c",
            'Twitter': f"java -jar {file_list[1]} -a {file} -b {file_list[0]} -m {file_list[2]}  -o {apk_output} -c",
            'Twitch': f"java -jar {file_list[1]} -a {file} -b {file_list[0]} -m {file_list[2]}  -o {apk_output} -c",
            'Other': f"java -jar {file_list[1]} -a {file} -b {file_list[0]} -m {file_list[2]}  -o {apk_output} -c"
        }

        # Check if the option is valid and get the corresponding command
        if option in command_map:
            command = command_map[option]
            comend = f"cd /d {Tools_folder} && {command}"
            run_command_gui(comend)
            show_custom_popup(name_apk,patched_folder)
        else:
            None

def custom_patch(option, file, name_apk, profile,apk_output):
    file_list = download_url()[6]
    folders = paths()
    Tools_folder = folders[3]
    patched_folder= folders[2]
    json_file = folders[6]

    with open(json_file) as filu:
        data = json.load(filu)

    command_parts = [
    f'cd /d {Tools_folder} && java -jar {file_list[1]}',
    f'-a {file}',
    f'-b {file_list[0]}',
    f'-m {file_list[2]}',
    f'-o {apk_output}',
    '-c']
    
    # Add parameters based on JSON values
    if not data['always-autorepeat']:
        command_parts.append('-e always-autorepeat')
    if not data['client-spoof']:
        command_parts.append('-e client-spoof')
    if not data['comments']:
        command_parts.append('-e comments')
    if not data['copy-video-url']:
        command_parts.append('-e copy-video-url')
    if not data['custom-branding']:
        command_parts.append('-e custom-branding')
    if not data['custom-video-buffer']:
        command_parts.append('-e custom-video-buffer')
    if not data['disable-auto-captions']:
        command_parts.append('-e disable-auto-captions')
    if not data['disable-fullscreen-panels']:
        command_parts.append('-e disable-fullscreen-panels')
    if not data['disable-player-popup-panels']:
        command_parts.append('-e disable-player-popup-panels')
    if not data['disable-shorts-on-startup']:
        command_parts.append('-e disable-shorts-on-startup')
    if not data['disable-zoom-haptics']:
        command_parts.append('-e disable-zoom-haptics')
    if not data['enable-debugging']:
        command_parts.append('-e enable-debugging')
    if not data['external-downloads']:
        command_parts.append('-e external-downloads')
    if not data['hdr-auto-brightness']:
        command_parts.append('-e hdr-auto-brightness')
    if not data['hide-ads']:
        command_parts.append('-e hide-ads')
    if not data['hide-album-cards']:
        command_parts.append('-e hide-album-cards')
    if not data['hide-artist-card']:
        command_parts.append('-e hide-artist-card')
    if not data['hide-autoplay-button']:
        command_parts.append('-e hide-autoplay-button')
    if not data['hide-breaking-news-shelf']:
        command_parts.append('-e hide-breaking-news-shelf')
    if not data['hide-captions-button']:
        command_parts.append('-e hide-captions-button')
    if not data['hide-cast-button']:
        command_parts.append('-e hide-cast-button')
    if not data['hide-crowdfunding-box']:
        command_parts.append('-e hide-crowdfunding-box')
    if not data['hide-email-address']:
        command_parts.append('-e hide-email-address')
    if not data['hide-endscreen-cards']:
        command_parts.append('-e hide-endscreen-cards')
    if not data['hide-filter-bar']:
        command_parts.append('-e hide-filter-bar')
    if not data['hide-floating-microphone-button']:
        command_parts.append('-e hide-floating-microphone-button')
    if not data['hide-info-cards']:
        command_parts.append('-e hide-info-cards')
    if not data['hide-load-more-button']:
        command_parts.append('-e hide-load-more-button')
    if not data['hide-player-buttons']:
        command_parts.append('-e hide-player-buttons')
    if not data['hide-player-overlay']:
        command_parts.append('-e hide-player-overlay')
    if not data['hide-seekbar']:
        command_parts.append('-e hide-seekbar')
    if not data['hide-shorts-components']:
        command_parts.append('-e hide-shorts-components')
    if not data['hide-timestamp']:
        command_parts.append('-e hide-timestamp')
    if not data['hide-video-action-buttons']:
        command_parts.append('-e hide-video-action-buttons')
    if not data['hide-watch-in-vr']:
        command_parts.append('-e hide-watch-in-vr')
    if not data['hide-watermark']:
        command_parts.append('-e hide-watermark')
    if not data['minimized-playback']:
        command_parts.append('-e minimized-playback')
    if not data['navigation-buttons']:
        command_parts.append('-e navigation-buttons')
    if not data['old-quality-layout']:
        command_parts.append('-e old-quality-layout')
    if not data['open-links-externally']:
        command_parts.append('-e open-links-externally')
    if not data['premium-heading']:
        command_parts.append('-e premium-heading')
    if not data['remember-video-quality']:
        command_parts.append('-e remember-video-quality')
    if not data['remove-player-controls-background']:
        command_parts.append('-e remove-player-controls-background')
    if not data['return-youtube-dislike']:
        command_parts.append('-e return-youtube-dislike')
    if not data['seekbar-tapping']:
        command_parts.append('-e seekbar-tapping')
    if not data['sponsorblock']:
        command_parts.append('-e sponsorblock')
    if not data['spoof-app-version']:
        command_parts.append('-e spoof-app-version')
    if not data['swipe-controls']:
        command_parts.append('-e swipe-controls')
    if not data['tablet-mini-player']:
        command_parts.append('-e tablet-mini-player')
    if not data['theme']:
        command_parts.append('-e theme')
    if not data['vanced-microg-support']:
        command_parts.append('-e vanced-microg-support')
    if not data['video-ads']:
        command_parts.append('-e video-ads')
    if not data['video-speed']:
        command_parts.append('-e video-speed')
    if not data['wide-searchbar']:
        command_parts.append('-e wide-searchbar')

    command = ' '.join(command_parts)
    try:
        run_command_gui(command)
        show_custom_popup(name_apk,patched_folder)
    except:
        None

    None

def run_command_gui(command):
    
    try:
        process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
        
        layout = [
            [sg.Output(size=(60, 20), key='-OUTPUT-', pad=(0, 0))],
            [sg.Button('Cerrar')]
        ]
        
        window = sg.Window('Ejecutar Comando', layout, finalize=True)
        
        def read_output():
            while True:
                output = process.stdout.readline()
                if output:
                    window['-OUTPUT-'].print(output.strip())
                else:
                    break
        
        # Inicia un subproceso para leer la salida estándar en segundo plano
        output_thread = threading.Thread(target=read_output)
        output_thread.start()
        
        while True:
            event, _ = window.read(timeout=100)
            if event == 'Cerrar' or event == sg.WINDOW_CLOSED:
                break
            
            if process.poll() is not None:
                # El proceso ha terminado
                break
        
   
        
        process.terminate()
        output_thread.join()
        window.close()
    


    except subprocess.CalledProcessError as e:
        error_output = e.stderr
        sg.popup_error('Error al ejecutar el comando', error_output)
