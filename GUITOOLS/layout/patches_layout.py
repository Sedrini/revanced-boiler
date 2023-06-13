import PySimpleGUI as sg
from GUITOOLS.ping import estatus

def layu():
        
    estatos = estatus()
    options = ['Youtube', 'Youtube Music','Tiktok','Twitter', 'Twitch', 'Other' ]
    profiles = ['Default', 'MIO-DEMI']


    youtube_patches = [
        [sg.Checkbox('CheckBox', key='-youtube-', visible=False, pad=((240, 0), (0, 0)))],
        [sg.Checkbox('CheckBox', key='-youtube-', visible=False, pad=((240, 0), (0, 0)))]
    ]

    layout = [
        [sg.Text("  Revanced | Boiler: ", font='Helvetica', pad=((0, 100), (0, 0))), sg.Text(f"Status: {estatos}")],
        [sg.Column(youtube_patches, element_justification='center')],

        [sg.Column([
            [sg.Text('App   '), sg.DropDown(options, key='dropdown', size=(13, 1))],
            [sg.Text('Profile'), sg.DropDown(profiles, key='profile', size=(13, 1))],
            [sg.Button("Patch", key='patch'), sg.Button('Update', key='update')],
        ], element_justification='center')],
    ]
    
    return layout


