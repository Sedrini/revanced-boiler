import PySimpleGUI as sg
import os
import json
import webbrowser

from GUITOOLS.patcher import apk_name
from GUITOOLS.download_files import check_files, create_folder
from GUITOOLS.Api_info import read_compatible_version, estatus, paths,write_json,check_update3

# Layout target version
def update_layout(window, selected_option,_):
    if selected_option == 'Youtube':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Youtube-'].update(visible=True)
    elif selected_option == 'Twitch':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=True)
        window['-Youtube-'].update(visible=False)
    elif selected_option == 'Youtube Music':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=True)
        window['-Twitch-'].update(visible=False)
        window['-Youtube-'].update(visible=False)
    elif selected_option == 'Tiktok':
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=True)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Youtube-'].update(visible=False)
    elif selected_option == 'Twitter':
        window['-twitter-'].update(visible=True)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Youtube-'].update(visible=False)
    else:
        window['-twitter-'].update(visible=False)
        window['-tiktok-'].update(visible=False)
        window['-ymusic-'].update(visible=False)
        window['-Twitch-'].update(visible=False)
        window['-Youtube-'].update(visible=False)

def main():
    create_folder()
    def layu():
        try:

            compatible = read_compatible_version()
        except:
            write_json('2')

        estatos = estatus()

        menu_layout = [
        ['Revanced', ['revanced.app']],
        ['Apkmirror', ['-youtube', '-Tiktok', '-Instagram']],
        ['Config', ['-Youtube']]
        ]

        options = ['','Youtube', 'Youtube Music','Tiktok','Twitter', 'Twitch','3er-Reddit', 'Other' ]
        profiles = ['','Default', 'Custom']  
            
        layout = [
            [sg.Menu(menu_layout)],
            [sg.Column([
                [sg.Text("version 1.6.1", pad=((0, 0), (0, 0)),background_color='#b4eeb4', ),
                 sg.Text("Revanced | Builder.py ", font='Helvetica', pad=((60, 80), (0, 0)),), 
                 sg.Text(f"Status: {estatos}", )],
                
                [sg.Text('Application', pad=((0, 0), (30, 0)),font=('Verdana', 11)), 
                sg.DropDown(options, key='-dropdown', size=(13, 1), enable_events=True, pad=((20, 0), (30, 0)),background_color='#f5f5dc'  ),
                sg.Text('Target Version: ', pad=((70, 0), (20, 0)),  border_width=10),
                sg.Text(compatible[0], key='-Youtube-',visible=False, pad=((0, 0), (20, 0)),  border_width=10),
                sg.Text(compatible[1], key='-Twitch-',visible=False, pad=((0, 0), (20, 0)),  border_width=10),
                sg.Text(compatible[2], key='-ymusic-',visible=False, pad=((0, 0), (20, 0)),  border_width=10),
                sg.Text('ALL  ', key='-tiktok-',visible=False, pad=((0, 0), (20, 0)),  border_width=10),
                sg.Text(compatible[4], key='-twitter-',visible=False, pad=((0, 0), (20, 0)),  border_width=10),
                ],

                [sg.Text('Profile', pad=((15, 0), (30, 0)),font=('Verdana', 11)), 
                sg.DropDown(profiles, key='profile', size=(13, 1), pad=((39, 0), (30, 0)),background_color='#f5f5dc',enable_events=True),
                ],

                [sg.Button('Patch',font=('Arial', 11),size=(7, 1),auto_size_button=True,button_color =('#000000','#6fcb9f'), enable_events=True, key='-patch-', pad=((10, 0), (40, 0))),
                sg.Button('Update',font=('Arial', 11),size=(7, 1),auto_size_button=True,button_color =('#000000','#6fcb9f'), key='update', pad=((43, 0), (40, 0)))],

            ])],
            #[sg.Button('gola',key='caa', pad=((433, 0), (10, 0)), enable_events=True)]


            ]

        return layout

    

    # Define el diseño de la GUI
    sg.theme('LightGreen')

    layout = layu()

    # Crea la ventana de la GUI
    window = sg.Window("Revanced - Boiler",layout,size=(500, 350))


    

    # Bucle principal para interactuar con la GUI
    while True:
        event, values = window.read()
        # Si se cierra la ventana o se presiona el botón "Cancelar", finaliza el programa
        if event == sg.WINDOW_CLOSED or event == "Cancelar":
            break
        elif event == '-patch-':
            print('ola')
            folders = paths()
            tools_folder= folders[3]

            if check_first_start(tools_folder):
                sg.popup("must click update button first (before patch)")
            else:

                profile = values['profile']
                selected_option = values['-dropdown']
                if selected_option == '':
                    None
                if profile == '':
                    None
                else:
                    apk_name(selected_option, profile)

        elif event == 'update':
            estatos = estatus()
            if estatos == 'Offline':
                sg.popup('No internet?',font='Helvetica')
            else:
                try:
                    check_update3()
                    check_files()
                except:
                    sg.popup('No internet? try2')

        elif event == '-Youtube':
            setting_patches('youtube')

        elif event in ('-dropdown') and ('profile'):
            selected_app = values['-dropdown']
            selected_profile = values['profile']
            if selected_app != 'Youtube':
                new = ['','Default']
                window['profile'].update(values=new)
            elif selected_app == 'Youtube':
                new = ['','Default', 'Custom']
                window['profile'].update(values=new)
            

            update_layout(window, selected_app,selected_profile)
        
    
#Open apk_mirror links
        elif event == '-youtube':
             url = 'https://www.apkmirror.com/apk/google-inc/youtube/youtube-18-23-36-release/youtube-18-23-36-2-android-apk-download/'  # Reemplaza con la URL de la página que deseas abrir
             webbrowser.open(url)

        elif event == '-Tiktok':
             url = 'https://www.apkmirror.com/apk/tiktok-pte-ltd/tik-tok-including-musical-ly/tik-tok-including-musical-ly-29-9-4-release/tiktok-29-9-4-2-android-apk-download/'  
             webbrowser.open(url)

        elif event == '-Instagram':
            url = 'https://www.apkmirror.com/apk/instagram/instagram-instagram/instagram-instagram-275-0-0-27-98-release/instagram-275-0-0-27-98-19-android-apk-download/'  
            webbrowser.open(url)
             
        elif event == 'revanced.app':
             url = 'https://revanced.app/'  
             webbrowser.open(url)

 
    window.close()

def config_screen():   

    def layu():
        estatos = estatus()
        pathe = paths()
        main_path = pathe[1]

        layout = [
            [sg.Column([
                [sg.Text("version 1.2", pad=((0, 0), (0, 0))),sg.Text("  Revanced | Boiler ", font='Helvetica', pad=((80, 89), (0, 0))), sg.Text(f"Status: {estatos}")],
                [sg.Button('Back', key='-back-')],
                [sg.Text(f'Main directory: {main_path}'),sg.Button('C'),sg.InputText()],
                [sg.Text(f'Current main directory: {main_path}'),sg.Button('C'),sg.InputText()]


            ])],
        
        ]
        return layout

    # Define el diseño de la GUI
    sg.theme('DarkTeal2')

    layout = layu()

    # Crea la ventana de la GUI
    window = sg.Window("Revanced - Boiler",layout,size=(500, 350))

    # Bucle principal para interactuar con la GUI
    while True:
        event, values = window.read()

        # Si se cierra la ventana o se presiona el botón "Cancelar", finaliza el programa
        if event == sg.WINDOW_CLOSED or event == "Cancelar":
            break
        
        elif event in ('dropdown'):
            selected_option = values['dropdown']
            update_layout(window, selected_option)
        
        elif event == '-back-':
            window.close()
            




    # Cierra la ventana y finaliza el programa
    window.close()

def read_config_from_json(custom_json):
    with open(custom_json) as file:
        config = json.load(file)
    return config

def check_first_start(tools_folder):
    
    if not os.path.isdir(tools_folder):
        return False
    
    content = os.listdir(tools_folder)
    if len (content) < 2:
        return True

    return False

def setting_patches(value):
    path = paths()
    custom_json = path[6]

    def custon_youtube():
        
        if os.path.exists(custom_json):
            pass
        else: 
            write_json('1')
            
        # NO te the most clean, but it should work
        config = read_config_from_json(custom_json)

        
        def layut():
            config = read_config_from_json(custom_json)

            layout = [
            
                [sg.Column([
                    [sg.Checkbox("always-autorepeat", key='-always-autorepeat'),
                    sg.Checkbox("client-spoof", key='-client-spoof'),
                    sg.Checkbox("comments", key='-comments')],
                    [sg.Checkbox("copy-video-url", key='-copy-video-url'),
                    sg.Checkbox("custom-branding", key='-custom-branding'),
                    sg.Checkbox("custom-video-buffer", key='-custom-video-buffer')],
                    [sg.Checkbox("disable-auto-captions", key='-disable-auto-captions'),
                    sg.Checkbox("disable-fullscreen-panels", key='-disable-fullscreen-panels')],
                    [sg.Checkbox("disable-player-popup-panels", key='-disable-player-popup-panels'),
                    sg.Checkbox("disable-shorts-on-startup", key='-disable-shorts-on-startup')],
                    [sg.Checkbox("disable-zoom-haptics", key='-disable-zoom-haptics'),
                    sg.Checkbox("enable-debugging", key='-enable-debugging')],
                    [sg.Checkbox("external-downloads", key='-external-downloads'),
                    sg.Checkbox("hdr-auto-brightness", key='-hdr-auto-brightness'),
                    sg.Checkbox("hide-ads", key='-hide-ads')],
                    [sg.Checkbox("hide-album-cards", key='-hide-album-cards'),
                    sg.Checkbox("hide-artist-card", key='-hide-artist-card'),
                    sg.Checkbox("hide-autoplay-button", key='-hide-autoplay-button'),
                    sg.Checkbox("hide-breaking-news-shelf", key='-hide-breaking-news-shelf'),
                    sg.Checkbox("hide-captions-button", key='-hide-captions-button')],
                    [sg.Checkbox("hide-cast-button", key='-hide-cast-button'),
                    sg.Checkbox("hide-crowdfunding-box", key='-hide-crowdfunding-box'),
                    sg.Checkbox("hide-email-address", key='-hide-email-address'),
                    sg.Checkbox("hide-endscreen-cards", key='-hide-endscreen-cards')],
                    [sg.Checkbox("hide-filter-bar", key='-hide-filter-bar'),
                    sg.Checkbox("hide-floating-microphone-button", key='-hide-floating-microphone-button')],
                    [sg.Checkbox("hide-info-cards", key='-hide-info-cards'),
                    sg.Checkbox("hide-load-more-button", key='-hide-load-more-button'),
                    sg.Checkbox("hide-layout-comp",key='-hide-layout-components')],
                    [sg.Checkbox("hide-player-buttons", key='-hide-player-buttons'),
                    sg.Checkbox("hide-player-overlay", key='-hide-player-overlay'),
                    sg.Checkbox("hide-seekbar", key='-hide-seekbar')],
                    [sg.Checkbox("hide-shorts-components", key='-hide-shorts-components'),
                    sg.Checkbox("hide-timestamp", key='-hide-timestamp')],
                    [sg.Checkbox("hide-video-action-buttons", key='-hide-video-action-buttons'),
                    sg.Checkbox("hide-watch-in-vr", key='-hide-watch-in-vr')],
                    [sg.Checkbox("hide-watermark", key='-hide-watermark'),
                    sg.Checkbox("minimized-playback", key='-minimized-playback')],
                    [sg.Checkbox("navigation-buttons", key='-navigation-buttons'),
                    sg.Checkbox("old-quality-layout", key='-old-quality-layout'),
                    sg.Checkbox("open-links-externally", key='-open-links-externally')],
                    [sg.Checkbox("premium-heading", key='-premium-heading'),
                    sg.Checkbox("remember-video-quality", key='-remember-video-quality')],
                    [sg.Checkbox("remove-player-controls-background", key='-remove-player-controls-background'),
                    sg.Checkbox("return-youtube-dislike", key='-return-youtube-dislike')],
                    [sg.Checkbox("seekbar-tapping", key='-seekbar-tapping'),
                    sg.Checkbox("sponsorblock", key='-sponsorblock'),
                    sg.Checkbox("spoof-app-version", key='-spoof-app-version')],
                    [sg.Checkbox("swipe-controls", key='-swipe-controls'),
                    sg.Checkbox("tablet-mini-player", key='-tablet-mini-player'),
                    sg.Checkbox("theme", key='-theme')],
                    [sg.Checkbox("vanced-microg-support", key='-vanced-microg-support'),
                    sg.Checkbox("video-ads", key='-video-ads'),
                    sg.Checkbox("video-speed", key='-video-speed')],
                    [sg.Checkbox("wide-searchbar", key='-wide-searchbar'),
                    sg.Button('Save'),sg.Button('Select all'),sg.Button("Selectn't all")]
                ])]      
            ]

            return layout

        # Define el diseño de la GUI
        sg.theme('LightGreen')
        layout = layut()

        # Crea la ventana de la GUI
        window = sg.Window("Revanced - Boiler",layout,size=(450, 650), finalize=True)

        window["-always-autorepeat"].update(value=config.get("always-autorepeat", False))
        window["-client-spoof"].update(value=config.get("client-spoof", False))
        window["-comments"].update(value=config.get("comments", False))
        window["-copy-video-url"].update(value=config.get("copy-video-url", False))
        window["-custom-branding"].update(value=config.get("custom-branding", False))
        window["-custom-video-buffer"].update(value=config.get("custom-video-buffer", False))
        window["-disable-auto-captions"].update(value=config.get("disable-auto-captions", False))
        window["-disable-fullscreen-panels"].update(value=config.get("disable-fullscreen-panels", False))
        window["-disable-player-popup-panels"].update(value=config.get("disable-player-popup-panels", False))
        window["-disable-shorts-on-startup"].update(value=config.get("disable-shorts-on-startup", False))
        window["-disable-zoom-haptics"].update(value=config.get("disable-zoom-haptics", False))
        window["-enable-debugging"].update(value=config.get("enable-debugging", False))
        window["-external-downloads"].update(value=config.get("external-downloads", False))
        window["-hdr-auto-brightness"].update(value=config.get("hdr-auto-brightness", False))
        window["-hide-ads"].update(value=config.get("hide-ads", False))
        window["-hide-album-cards"].update(value=config.get("hide-album-cards", False))
        window["-hide-artist-card"].update(value=config.get("hide-artist-card", False))
        window["-hide-autoplay-button"].update(value=config.get("hide-autoplay-button", False))
        window["-hide-breaking-news-shelf"].update(value=config.get("hide-breaking-news-shelf", False))
        window["-hide-captions-button"].update(value=config.get("hide-captions-button", False))
        window["-hide-cast-button"].update(value=config.get("hide-cast-button", False))
        window["-hide-crowdfunding-box"].update(value=config.get("hide-crowdfunding-box", False))
        window["-hide-email-address"].update(value=config.get("hide-email-address", False))
        window["-hide-endscreen-cards"].update(value=config.get("hide-endscreen-cards", False))
        window["-hide-filter-bar"].update(value=config.get("hide-filter-bar", False))
        window["-hide-floating-microphone-button"].update(value=config.get("hide-floating-microphone-button", False))
        window["-hide-info-cards"].update(value=config.get("hide-info-cards", False))
        window["-hide-layout-components"].update(value=config.get("hide-layout-comp",False))
        window["-hide-load-more-button"].update(value=config.get("hide-load-more-button", False))
        window["-hide-player-buttons"].update(value=config.get("hide-player-buttons", False))
        window["-hide-player-overlay"].update(value=config.get("hide-player-overlay", False))
        window["-hide-seekbar"].update(value=config.get("hide-seekbar", False))
        window["-hide-shorts-components"].update(value=config.get("hide-shorts-components", False))
        window["-hide-timestamp"].update(value=config.get("hide-timestamp", False))
        window["-hide-video-action-buttons"].update(value=config.get("hide-video-action-buttons", False))
        window["-hide-watch-in-vr"].update(value=config.get("hide-watch-in-vr", False))
        window["-hide-watermark"].update(value=config.get("hide-watermark", False))
        window["-minimized-playback"].update(value=config.get("minimized-playback", False))
        window["-navigation-buttons"].update(value=config.get("navigation-buttons", False))
        window["-old-quality-layout"].update(value=config.get("old-quality-layout", False))
        window["-open-links-externally"].update(value=config.get("open-links-externally", False))
        window["-premium-heading"].update(value=config.get("premium-heading", False))
        window["-remember-video-quality"].update(value=config.get("remember-video-quality", False))
        window["-remove-player-controls-background"].update(value=config.get("remove-player-controls-background", False))
        window["-return-youtube-dislike"].update(value=config.get("return-youtube-dislike", False))
        window["-seekbar-tapping"].update(value=config.get("seekbar-tapping", False))
        window["-sponsorblock"].update(value=config.get("sponsorblock", False))
        window["-spoof-app-version"].update(value=config.get("spoof-app-version", False))
        window["-swipe-controls"].update(value=config.get("swipe-controls", False))
        window["-tablet-mini-player"].update(value=config.get("tablet-mini-player", False))
        window["-theme"].update(value=config.get("theme", False))
        window["-vanced-microg-support"].update(value=config.get("vanced-microg-support", False))
        window["-video-ads"].update(value=config.get("video-ads", False))
        window["-video-speed"].update(value=config.get("video-speed", False))
        window["-wide-searchbar"].update(value=config.get("wide-searchbar", False))

        # Bucle principal para interactuar con la GUI
        while True:
            event, values = window.read()

            # Si se cierra la ventana o se presiona el botón "Cancelar", finaliza el programa
            if event == sg.WINDOW_CLOSED or event == "Cancelar":
                break

            elif event == "Save":
                config["always-autorepeat"] = values["-always-autorepeat"]
                config["client-spoof"] = values["-client-spoof"]
                config["comments"] = values["-comments"]
                config["copy-video-url"] = values["-copy-video-url"]
                config["custom-branding"] = values["-custom-branding"]
                config["custom-video-buffer"] = values["-custom-video-buffer"]
                config["disable-auto-captions"] = values["-disable-auto-captions"]
                config["disable-fullscreen-panels"] = values["-disable-fullscreen-panels"]
                config["disable-player-popup-panels"] = values["-disable-player-popup-panels"]
                config["disable-shorts-on-startup"] = values["-disable-shorts-on-startup"]
                config["disable-zoom-haptics"] = values["-disable-zoom-haptics"]
                config["enable-debugging"] = values["-enable-debugging"]
                config["external-downloads"] = values["-external-downloads"]
                config["hdr-auto-brightness"] = values["-hdr-auto-brightness"]
                config["hide-ads"] = values["-hide-ads"]
                config["hide-album-cards"] = values["-hide-album-cards"]
                config["hide-artist-card"] = values["-hide-artist-card"]
                config["hide-autoplay-button"] = values["-hide-autoplay-button"]
                config["hide-breaking-news-shelf"] = values["-hide-breaking-news-shelf"]
                config["hide-captions-button"] = values["-hide-captions-button"]
                config["hide-cast-button"] = values["-hide-cast-button"]
                config["hide-crowdfunding-box"] = values["-hide-crowdfunding-box"]
                config["hide-email-address"] = values["-hide-email-address"]
                config["hide-endscreen-cards"] = values["-hide-endscreen-cards"]
                config["hide-filter-bar"] = values["-hide-filter-bar"]
                config["hide-floating-microphone-button"] = values["-hide-floating-microphone-button"]
                config["hide-info-cards"] = values["-hide-info-cards"]
                config["hide-layout-comp"]= values["-hide-layout-components"]
                config["hide-load-more-button"] = values["-hide-load-more-button"]
                config["hide-player-buttons"] = values["-hide-player-buttons"]
                config["hide-player-overlay"] = values["-hide-player-overlay"]
                config["hide-seekbar"] = values["-hide-seekbar"]
                config["hide-shorts-components"] = values["-hide-shorts-components"]
                config["hide-timestamp"] = values["-hide-timestamp"]
                config["hide-video-action-buttons"] = values["-hide-video-action-buttons"]
                config["hide-watch-in-vr"] = values["-hide-watch-in-vr"]
                config["hide-watermark"] = values["-hide-watermark"]
                config["minimized-playback"] = values["-minimized-playback"]
                config["navigation-buttons"] = values["-navigation-buttons"]
                config["old-quality-layout"] = values["-old-quality-layout"]
                config["open-links-externally"] = values["-open-links-externally"]
                config["premium-heading"] = values["-premium-heading"]
                config["remember-video-quality"] = values["-remember-video-quality"]
                config["remove-player-controls-background"] = values["-remove-player-controls-background"]
                config["return-youtube-dislike"] = values["-return-youtube-dislike"]
                config["seekbar-tapping"] = values["-seekbar-tapping"]
                config["sponsorblock"] = values["-sponsorblock"]
                config["spoof-app-version"] = values["-spoof-app-version"]
                config["swipe-controls"] = values["-swipe-controls"]
                config["tablet-mini-player"] = values["-tablet-mini-player"]
                config["theme"] = values["-theme"]
                config["vanced-microg-support"] = values["-vanced-microg-support"]
                config["video-ads"] = values["-video-ads"]
                config["video-speed"] = values["-video-speed"]
                config["wide-searchbar"] = values["-wide-searchbar"]

                with open(custom_json, "w") as file:
                    json.dump(config, file, indent=4)
                
                sg.popup("Configuration saved!")

            elif event == "Select all":
                for key in values:
                    if isinstance(window[key], sg.Checkbox):
                        window[key].update(value=True)

            elif event == "Selectn't all":
                for key in values:
                    if isinstance(window[key], sg.Checkbox):
                        window[key].update(value=False)
            

        # Cierra la ventana y finaliza el programa
        window.close()


    if value == 'youtube':
        custon_youtube()
    else:
        None




if __name__ == '__main__':
    main()






