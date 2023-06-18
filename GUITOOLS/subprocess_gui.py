import subprocess
import threading
import PySimpleGUI as sg

def run_command(command, name_apk, patched_folder):
    #command = r'cd /d C:\Users\Adrik_77\Documents\Revanced_Boiler\Tools && java -jar ReVanced-cliv2.21.2.jar -a C:/Users/Adrik_77/Downloads/youtube18.19.35.apk -b revanced-patchesv2.175.0.jar -m ReVanced-integrationsv0.109.0.apk -e always-autorepeat -e custom-video-buffer -e debugging -e downloads -e hide-my-mix -o C:\Users\Adrik_77\Documents\Revanced_Boiler\Patched_apk\111ReYoutube.apk -c'
    
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


