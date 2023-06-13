from GUITOOLS.Api_info import download_url
from subprocess_gui import run_command
from pathz import paths
import os


def patcher_options(): #should be configuration, new screen?, pop_up?, change current screen?, bla bla bla
    None

def pathcer_name(option, file, name_apk, profile):
    #RETURNS
    folders = paths()
    file_list = download_url()[6]
    patched_folder= folders[2]

    while os.path.exists(patched_folder / name_apk):
        name_apk = '1'+name_apk
    else:
        pass     

    apk_output = patched_folder / name_apk

    # commands from- this is what subprocess process 
    # Idk how to make them change when apply the new screen for configuration, i was thinking of making profiles.
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
        patcher_run(command)
    else:
        print("Invalid option")

            

def patcher_run(command):
    folders = paths()
    Tools_folder = folders[3]
    comen = f"cd /d {Tools_folder} && {command}"
    run_command(comen)

def read_profile():
    folders = paths()
