import requests

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