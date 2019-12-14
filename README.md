# C++ Beginner Tutorial

Dieses Repository beeinhaltet die Dateien zur YouTube Reihe **"C++ Beginner Tutorial"** von CodingWithMagga. In den Unterordnern Tutorial bzw. Übungen findet ihr die jeweiligen Dateien zu dem entsprechenden YouTube Video. Zu jedem Tutorial gibt es eine dazugehörige Übung die im Video angesprochen wurde. Es wird mit Absicht **keine** *Musterlösung* geben. Das Ziel soll es sein durch Anschauen der Videos, selbstständiges Arbeiten und mit Hilfe der Community die Aufgaben zu lösen. 

Fragen oder Verbesserungsvorschläge können gerne im Kommentarbereich des jeweiligen Videos oder hier in github als [Issue](https://help.github.com/en/articles/creating-an-issue) gestellt werden. Für die Erstellung eines Issues ist eine Registrierung bei github erforderlich. Verseht bitte eure Issues mit einem entsprechenden **Label**.

## Tutorials und Übungen downloaden

Um die Dateien herunterzuladen ist **keine** Registrierung bei github notwendig, lediglich git muss auf eurem Computer installiert sein. Ein kleines Tutorial zu git findet ihr bspw. hier https://rogerdudler.github.io/git-guide/index.de.html.

### Installation & Konfiguration von git 

#### Ubuntu 16.04

Zur Installation von git unter Ubuntu 16.04 führe die folgenden Befehle in einem Terminal aus. Ein Terminal kannst du bspw. über die Tastenkombination `Strg` + `Alt` + `T` öffnen.

```sh
sudo apt-get update
sudo apt-get install git
```

#### Windows

siehe http://msysgit.github.com/

#### Mac 

siehe http://sourceforge.net/projects/git-osx-installer/

Dies scheint jedoch unter einigen OSX Versionen zu Problemem zu führen. Eine Alternative ist die Installation via MacPorts

```sh
sudo port install git-core +svn +doc +bash_completion +gitweb
brew install git
```

Die optionalen Features müssen dabei nicht mit installiert werden, sind aber hilfreich. 

### Konfiguration von git
Zum Konfigurieren von git sind die folgenden Befehle hilfreich. Falls du die Dateien lediglich downloaden möchtest und keinen github Account hast, ist dieser Schritt nicht notwendig. 

```sh
git config --global user.name "Your Name"
git config --global user.email "youremail@domain.com"
```

### Download

Gebe folgenden Befehl in dein Terminal ein um dieses Repository in das aktuelle Verzeichnis herunterzuladen.

```sh
git clone https://github.com/codingwithmagga/cpp_beginner_tutorial_de
```

Nun habt ihr alle Dateien auf eurem Rechner. 

Falls in der Zwischenzeit neue Dateien hinzugekommen sind kannst du deinen Ordner mit dem folgenden Befehl aktualisieren.

```sh
git pull
```

### Installation cmake

#### Ubuntu 16.04

Zur Installation von cmake den folgenden Befehl im Terminal ( `Strg` + `Alt` + `T` ) ausführen.

```sh
sudo apt-get install cmake
```

#### Windows & Mac

siehe https://cmake.org/download/

### Installation make, gcc, ...

#### Ubuntu 16.04

Zur Installation der build tools (make, gcc, ...) den folgenden Befehl im Terminal ( `Strg` + `Alt` + `T` ) ausführen.

```sh
sudo apt-get install build-essentials
```

#### Windows & Mac

zusätzlich für Mac: https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1164/handouts/qt-creator-mac.html

zusätzlich für Windows: Installiere MinGw während der QtCreator Installation, zu sehen hier https://www.ics.com/blog/getting-started-qt-and-qt-creator-windows

### Installation clang-format

#### Ubuntu 16.04

Zur Installation von clang-format den folgenden Befehl im Terminal ( `Strg` + `Alt` + `T` ) ausführen.

```sh
sudo apt install clang-format
```

#### Windows 

siehe https://llvm.org/builds/

#### Mac

siehe http://macappstore.org/clang-format/

### Installation & Konfiguration des QtCreators

folgt, ist aber im ersten Tutorialvideo auf YouTube dargestellt
* [Offline Installer](https://www.qt.io/offline-installers)
* [Online Installer](http://download.qt.io/official_releases/online_installers/)

### Nützliche Links

* [C++ Standard Bibliothek (Schnittstelle)](https://de.cppreference.com/w/cpp/header)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)
* [IsoCPP](https://isocpp.org/) (insbesondere die Core Guidelines)
* [Catch2](https://github.com/catchorg/Catch2)
* [google test](https://github.com/google/googletest)
* [Operatoren](https://de.wikibooks.org/wiki/C%2B%2B-Programmierung:_Operatoren)
* [Ausgabe-Manipulatoren](https://de.wikibooks.org/wiki/C%2B%2B-Programmierung:_Einfache_Ein-_und_Ausgabe)

<!---
### Sponsoring

Diese Seite, sowie die Videoreihe auf YouTube, befinden sich derzeit noch im Aufbau. Falls ihr mich allerdings jetzt schon mit einer kleinen Spende unterstützen wollt könnt ihr das gerne ganz oben auf dieser Seite über den Button **Sponsor** via PayPal.me tun. Dies ist absolut freiwillig, der komplette Content steht allen **kostenlos** (hier bei github, bzw. bei YouTube) zur Verfügung. 
-->
