import PySimpleGUI as sg

options = ['Youtube', 'Youtube Music', 'Reddit', 'Tiktok','Instagram', 'Twitter', 'Twitch' ]
profiles = ['Default', 'MIO-DEMI']
           

# Define el diseño de la GUI
layout = [
    [
     sg.Text("Revanced | Profiles: ",pad=((50, 100), (0, 0))),
     sg.Text('Patches settings',pad=((200, 0), (20, 0))),
     sg.Button('Main',pad=((10, 0), (0, 0))         ),
     ],

    [sg.Text('App   ',pad=((0, 0), (40, 0))          ), sg.DropDown(options, key='dropdown',size=(13, 1),pad=((10, 0), (40, 0))       )],
    [sg.Text('Profile',pad=((0, 0), (20, 0))         ), sg.DropDown(profiles,key='profile', size=(13, 1),pad=((10, 0), (20, 0))     )],
    [sg.Button('SHOW',pad=((0, 0), (40, 0))         )],



    ]

# Crea la ventana de la GUI
window = sg.Window("Revanced - Boiler - Profiles Settings",layout,size=(700, 450))

# Bucle principal para interactuar con la GUI
while True:
    event, values = window.read()

    # Si se cierra la ventana o se presiona el botón "Cancelar", finaliza el programa
    if event == sg.WINDOW_CLOSED or event == "Cancelar":
        break


# Cierra la ventana y finaliza el programa
window.close()


