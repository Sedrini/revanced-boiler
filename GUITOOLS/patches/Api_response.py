import requests


def api_requests():
    response_patches = requests.get("https://releases.revanced.app/patches").json()
    response_tools = requests.get("https://releases.revanced.app/tools").json()
    return response_patches, response_tools


