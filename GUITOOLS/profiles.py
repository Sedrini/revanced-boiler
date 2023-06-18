from pathz import paths
import PySimpleGUI as sg
import json

folders = paths()
default_json = folders[5]

def json_write():
    data = [
        {
            "always-autorepeat": False,
            "client-spoof": False,
            "comments": False,
            "copy-video-url": False,
            "custom-branding": False,
            "custom-video-buffer": False,
            "disable-auto-captions": False,
            "disable-fullscreen-panels": False,
            "disable-player-popup-panels": False,
            "disable-shorts-on-startup": False,
            "disable-zoom-haptics": False,
            "enable-debugging": False,
            "external-downloads": False,
            "hdr-auto-brightness": False,
            "hide-ads": False,
            "hide-album-cards": False,
            "hide-artist-card": False,
            "hide-autoplay-button": False,
            "hide-breaking-news-shelf": False,
            "hide-captions-button": False,
            "hide-cast-button": False,
            "hide-crowdfunding-box": False,
            "hide-email-address": False,
            "hide-endscreen-cards": False,
            "hide-filter-bar": False,
            "hide-floating-microphone-button": False,
            "hide-info-cards": False,
            "hide-load-more-button": False,
            "hide-player-buttons": False,
            "hide-player-overlay": False,
            "hide-seekbar": False,
            "hide-shorts-components": False,
            "hide-timestamp": False,
            "hide-video-action-buttons": False,
            "hide-watch-in-vr": False,
            "hide-watermark": False,
            "minimized-playback": False,
            "navigation-buttons": False,
            "old-quality-layout": False,
            "open-links-externally": False,
            "premium-heading": False,
            "remember-video-quality": False,
            "remove-player-controls-background": False,
            "return-youtube-dislike": False,
            "seekbar-tapping": False,
            "sponsorblock": False,
            "spoof-app-version": False,
            "swipe-controls": False,
            "tablet-mini-player": False,
            "theme": False,
            "vanced-microg-support": False,
            "video-ads": False,
            "video-speed": False,
            "wide-searchbar": False
        }
    ]

    with open(f"{default_json}", "w") as outfile:
        json.dump({"Youtube": data}, outfile, indent=2)

def json_read():
    with open(default_json) as file:
        configuracion = json.load(file)
        print(configuracion['Youtube'][0]['always-autorepeat'])  # Imprimir el contenido completo del diccionario
        ...


def read_config_from_json(default_json):
    with open(default_json) as file:
        config = json.load(file)
    return config

def main():
    # Read the configuration from the JSON file
    config = read_config_from_json(default_json)

    # Define the layout of the window
    layout = [
        [sg.Checkbox("Checkbox 1", key="checkbox1")],
        [sg.Checkbox("Checkbox 2", key="checkbox2")],
        [sg.Button("Save Configuration")]
    ]

    # Create the window
    window = sg.Window("Checkbox Program", layout)

    # Set the initial checkbox values based on the configuration
    window["checkbox1"].update(value=config.get("checkbox1", False))
    window["checkbox2"].update(value=config.get("checkbox2", False))

    # Event loop
    while True:
        event, values = window.read()
        if event == sg.WINDOW_CLOSED:
            break
        elif event == "Save Configuration":
            # Update the configuration with the checkbox values
            config["checkbox1"] = values["checkbox1"]
            config["checkbox2"] = values["checkbox2"]

            # Save the updated configuration to the JSON file
            with open(default_json, "w") as file:
                json.dump(config, file, indent=4)
            
            sg.popup("Configuration saved!")

    # Close the window
    window.close()

main()