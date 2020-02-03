# Übung: Algorithmen & Datenstrukturen

In diesem Repository befinden sich Materialien und Lösungen, die im Rahmen meiner Übungen zur Lehrveranstaltung **Algorithmen und Datenstrukturen** im Wintersemester 2019/20 entstanden sind.

Diese Lösungen wurden nicht vom Lehrstuhl erstellt und können damit trotz gründlicher Arbeit noch Fehler enthalten. Findet ihr einen solchen, dann fühlt euch eingeladen, diesen mit einem Pull-Request zu beheben.

Bitte beachtet stets die aktuellen Informationen auf der [Website der Lehrveranstaltung](https://www.orchid.inf.tu-dresden.de/teaching/2019ws/aud/)

Bei Fragen oder Problemen könnt ihr euch an [mich](mailto:eric.kunze@mailbox.tu-dresden.de) oder an [Thomas Ruprecht](mailto:thomas.ruprecht@tu-dresden.de) wenden.

## Programmieren mit C - Crogrammieren

In der Übung verwende ich die GNU Compiler Collection (GCC) zusammen mit Notepad++ als Editor. Wie ihr euch selbst C-fähig macht, ist euch selbst überlassen.

Unter Linux ist die Installation von GCC recht einfach mit dem Command `sudo apt-get install build-essential`. Weitere Information zu GCC findet ihr [hier](https://wiki.ubuntuusers.de/GCC/).

Die Installation unter Windows ist ein wenig schwieriger und kann auf verschiedenen Wegen erfolgen:
* [Hier](https://wiki.freitagsrunde.org/C_(GCC_unter_Windows)) findet ihr eine recht gute Anleitung. Diese nutzt [MinGW](http://www.mingw.org/).
* Alternativ könnt ihr euch auch [Cygwin](https://www.cygwin.com/install.html) anschauen - ein Tutorial findet ihr beispielsweise [hier](https://warwick.ac.uk/fac/sci/moac/people/students/peter_cock/cygwin/part2/).
* Eine dritte Möglichkeit ist [tdm-gcc](http://tdm-gcc.tdragon.net/index.php/).
Auf jeden Fall findet ihr dazu auch zahlreiche YouTube-Tutorials. Wenn alle Wege scheitern, könnt ihr auch mal beim iFSR vorbeigehen, die helfen euch bei Installationsproblemen mich fachkundigem Rat weiter.

Mit dem Befehl `gcc -v` kann getestet werden, ob der Compiler bereits installiert ist.

Als Alternative zum Compilieren auf der Konsole könnt ihr auch einen Online-Compiler ansehen. Ein auf den ersten Blick relativ guter scheint [dieser](https://www.onlinegdb.com/online_c_compiler) zu sein.

Den Quelltext schreibt ihr stets in eine Datei mit der Endung `.c`, beispielsweise `test.c`. Dann navigiert ihr in der Konsole in das Verzeichnis, wo ihr die Datei gespeichert habt (mittels Befehl `cd`). Dort angekommen könnt ihr den Compile-Vorgang starten mit `gcc test.c`. Das erzeugt eine ausführbare Datei, die den Namen `a.out` (Linux) oder `a.exe` (Windows) trägt. Diese könnt ihr mit `./a.out` bzw. `./a.exe` ausführen. Soll die ausführbare Datei anders heißen, nutzt man die Option `-o neuerDateiname` zusätzlich, d.h. `gcc -o testDatei test.c` liefert `testDatei` bzw. `testDatei.exe` und die startet ihr dann wie üblich mit `./testDatei` bzw. `./testDatei.exe`.

Weitere Informationen findet ihr auch auf der Lehrveranstaltungswebsite.

## Weitere Materialien
* [CheatSheet Linux-Terminal](https://www.cheatography.com/davechild/cheat-sheets/linux-command-line/pdf/)
*



## Kontakt
* Eric Kunze
* Mail: [eric.kunze@mailbox.tu-dresden.de](eric.kunze@mailbox.tu-dresden.de)
