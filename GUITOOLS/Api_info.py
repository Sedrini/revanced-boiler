import os
import json
import requests
import sys
from pathlib import Path
# Obtener el directorio actual donde se encuentra el archivo en ejecución
current_directory = os.path.dirname(os.path.abspath(__file__))
# Agregar el directorio actual al PYTHONPATH
sys.path.append(current_directory)
# Ahora puedes importar el módulo 'Api_response'


def paths():
    documents_folder = Path(os.environ["USERPROFILE"]) / "Documents" / "Revanced_Boiler"
    patched_folder = documents_folder / "Patched_apk"
    json_file = documents_folder / "Info.json"
    tools_folder = documents_folder / 'Tools'
    profile_folder = documents_folder / 'Profiles'
    default_json = profile_folder / 'default.json'
    custom_json = profile_folder / 'custom.json'


    folder = [json_file,documents_folder,patched_folder,tools_folder, profile_folder, default_json,custom_json]
    return folder

def api_requests():
    try:
        response_patches = requests.get("https://releases.revanced.app/patches").json()
        response_tools = requests.get("https://releases.revanced.app/tools").json()
        return response_patches, response_tools
    except:
        None

def compatible_version():
    response_patches = api_requests()[0]
    youtube_version = response_patches[0]['compatiblePackages'][0]['versions'][1]
    twitch_version = response_patches[3]['compatiblePackages'][0]['versions'][5]
    youtubemusic_version = response_patches[6]['compatiblePackages'][0]['versions'][16]
    instagram_version = response_patches[65]['compatiblePackages'][0]['versions'][0]
    twitter_version = response_patches[68]['compatiblePackages'][0]['versions'][1]


    compatible = [youtube_version,twitch_version,youtubemusic_version,instagram_version,twitter_version]

    return compatible

def read_compatible_version():
    try:
        folders = paths()
        json_file = folders[0]
        try:
            with open(json_file) as f:
                    data = json.load(f)
                    # Patches 
                    youtube = data['INFO'][3]['youtube']
                    twitch = data['INFO'][3]['twitch']
                    youtube_music = data['INFO'][3]['youtube_music']
                    instagram = data['INFO'][3]['instagram_version']
                    twitter = data['INFO'][3]['twitter_version']
                    compatible_j = [youtube,twitch,youtube_music,instagram,twitter]
        except:
            write_json()
    
        
        
        return compatible_j
    except:
        None

def download_url():
    folders = paths()
    json_file = folders[0]

    if not os.path.exists(os.path.join(json_file)):
        write_json()
    
    with open(json_file) as f:
        data = json.load(f)
        # Patches 
        patches_title = data['INFO'][0]['title']
        patches_version = data['INFO'][0]['version']
        patches_url = data['INFO'][0]['url']
        patches_name = patches_title+patches_version
        # CLI
        cli_title = data['INFO'][1]['title']
        cli_version = data['INFO'][1]['version']
        cli_url = data['INFO'][1]['url']
        cli_name = cli_title+cli_version
        # Integrations
        integrations_title = data['INFO'][2]['title']
        integrations_version = data['INFO'][2]['version']
        integrations_url = data['INFO'][2]['url']
        integrations_name = integrations_title+integrations_version

        file_list = [patches_name+'.jar', cli_name+'.jar', integrations_name+'.apk']

    return patches_url, patches_name, cli_url, cli_name, integrations_url, integrations_name, file_list

def write_json():
    write_json_profile()
    compatible = compatible_version()
    response_tools = api_requests()[1]
    folders = paths()
    json_file = folders[0]

    #PATCHES
    patches_down = response_tools['tools'][2]['browser_download_url']              #Download Patches .Jar
    patches_version = response_tools['tools'][2]['version'] 
    #CLI 
    cli_down = response_tools['tools'][5]['browser_download_url'] 
    cli_version = response_tools['tools'][5]['version']     
    #Integrations 
    integrations_down = response_tools['tools'][3]['browser_download_url']
    integrations_version = response_tools['tools'][3]['version']   


    # INFO IS GOING TO BE TO JSON FILE
    compatible = compatible_version()
    cc = compatible
    data = [
    {
        "title": "Revanced-patches",
        "version": patches_version,
        "url": patches_down,
        "source_url": ""
      },
      {
        "title": "ReVanced-cli",
        "version": cli_version,
        "url": cli_down,
        "source_url": ""
      },
      {
       "title": "ReVanced-integrations",
        "version": integrations_version,
        "url": integrations_down,
        "source_url": ""
      },
      {
        "title": "compatiblePackages",
        "youtube": compatible[0],
        "twitch": compatible[1],
        "youtube_music": compatible[2],
        "instagram_version": compatible[3],
        "twitter_version": compatible[4],
      },
]
    
    with open(f"{json_file}", "w") as outfile:
        json.dump({"INFO": data}, outfile, indent=2)
    
    return patches_version

def delete_old_files(blabla):
    #revanced-patches','ReVanced-integrations','ReVanced-cliv
    folders = paths()
    tools_folder = folders[3]


    file_initials = [blabla]

    file_list = os.listdir(tools_folder)

    try:
        for file_name in file_list:
            for initial in file_initials:
                if file_name.startswith(initial):
                    file_path = os.path.join(tools_folder, file_name)
                    os.remove(file_path)
                    break
    except Exception as e:
        print(f"Error al eliminar archivos: {str(e)}")
        # Aquí puedes agregar un manejo de error adecuado si lo deseas

def check_update3():
    response_tools = api_requests()[1]
    
    patches_version_online = response_tools['tools'][2]['version']
    patches_url = response_tools['tools'][2]['browser_download_url']              #Download Patches .Jar
    cli_url = response_tools['tools'][5]['browser_download_url']
    cli_version_online = response_tools['tools'][5]['version']
    integrations_version_online = response_tools['tools'][3]['version']
    integrations_url = response_tools['tools'][3]['browser_download_url']

    c = 1
    folders = paths()
    json_file = folders[0]
    while c > 2:
        try:
            with open(json_file) as f:
                data = json.load(f)
                # Patches 
                patches_title = data['INFO'][0]['title']
                patches_version = data['INFO'][0]['version']
                cli_title = data['INFO'][1]['title']
                cli_version = data['INFO'][1]['version']
                integrations_version = data['INFO'][2]['version']
                integrations_title = data['INFO'][2]['title']


            if patches_version_online != patches_version: 
                delete_old_files(patches_title)
                write_json()
            
            if cli_version_online != cli_version: 
                delete_old_files(cli_title)


            if integrations_version_online != integrations_version: 
                delete_old_files(integrations_title)

        except:
            write_json()
        
        c = c+1

def write_json_profile():

    compatible = compatible_version()
    response_tools = api_requests()[1]
    folders = paths()
    custom_json = folders[6]

    
    data = [
        {
    "always-autorepeat": False,

}
    ]

    with open(f"{custom_json}", "w") as outfile:
        json.dump({"": data}, outfile, indent=2)

def estatus():

    timeout = 1

    try:
        requests.head("http://www.google.com/", timeout=timeout)
        # Do something
        estatus = 'Online'
    except requests.ConnectionError:
        # Do something
        estatus = 'Offline'

    return estatus