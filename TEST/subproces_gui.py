import subprocess
import PySimpleGUI as sg

def ping_google():
    try:
        process = subprocess.Popen(['ping', 'google.com'], stdout=subprocess.PIPE, universal_newlines=True)
        
        output = ''
        for line in iter(process.stdout.readline, ''):
            output += line
            sg.popup_quick_message(line.strip())
        
        process.stdout.close()
        process.wait()
        
        layout = [
            [sg.Multiline(output, size=(60, 20), key='-OUTPUT-', autoscroll=True)],
            [sg.Button('Cerrar')]
        ]
        
        window = sg.Window('Ping a Google', layout)
        
        while True:
            event, _ = window.read()
            if event == 'Cerrar' or event == sg.WINDOW_CLOSED:
                break
        
        window.close()
    except subprocess.CalledProcessError as e:
        error_output = e.stderr.strip()
        sg.popup_error('Error al hacer ping a Google', error_output)

if __name__ == '__main__':
    ping_google()
