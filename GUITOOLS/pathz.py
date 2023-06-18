from pathlib import Path
import os

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


