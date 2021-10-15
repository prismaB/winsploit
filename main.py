import os
import sys
import subprocess
import socket

ip = sys.argv[1]
vuln = sys.argv[2]


if vuln == "smbghost":
    print("exploit => smbghost")
    print("--------------------")
    print("ip => " + " " + ip)
    print("scan started")
    def start():
        try:
            os.system("nmap --script cve-2020-0796.nse -p445" + " " + ip)
        except KeyboardInterrupt:
            print("scan stopped")
            sys.exit(1)
    def scan():
        try:
            subprocess.call(["nmap"])
        except FileNotFoundError:
            print("err")
        def checkfile():
            from os import path
            file = '/usr/share/nmap/scripts/cve-2020-0796.nse'
            path.isfile(file)
            if path.isfile(file):
                start()
            else:
                print("nmap script not found")
elif vuln == "eternalblue":
    print("ip =>" + " " + ip)
    print("-----------------")
    print("exploit =>" + " " + vuln)
    try:
        os.system("python  /usr/share/winsploit/windows/eternal_checker.py " +"  " + ip)
    except KeyboardInterrupt:
        print("err")
    except FileNotFoundError:
        print("err")
if __name__ == "__main__":
    start()
    scan()
    checkfile()
