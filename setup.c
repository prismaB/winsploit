#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("downlanding nmap nse script");
  system("curl -O https://raw.githubusercontent.com/psc4re/NSE-scripts/master/cve-2020-0796.nse /usr/share/nmap/scripts");
  sleep(1);
  printf("updating nmap nse script");
  sleep(1);
  system("nmap --script-updatedb");
  sleep(1);
  printf("setupping files");
  sleep(1);
  system("mkdir /usr/share/winsploit/ && mkdir /usr/share/winsploit/windows");
  system("curl -O https://raw.githubusercontent.com/3ndG4me/AutoBlue-MS17-010/master/mysmb.py /usr/share/winsploit/windows/");
  system("curl -O https://raw.githubusercontent.com/3ndG4me/AutoBlue-MS17-010/master/eternal_checker.py /usr/share/winsploit/windows/");
  system("cp main.py /usr/bin/winsploit");
  sleep(1);
  printf("deleting files");
  system("rm -r *");
}
