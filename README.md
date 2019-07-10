### RUN/DEBUG Code snippets:

1. Using Code Runner extension: Select with cursor the snippets you want to debug and right-click and select Run Code. Running over OUTPUT channel.

2. Using terminal for interactive debug. Open Terminal channel and run the following command:

<pre>$ g++ $FileName.cpp -o $FileName && "d:\$WORKDIR\FileName"</pre>

<pre>$ gcc $FileName.cpp -o $FileName && "d:\$WORKDIR\FileName"</pre>

### GitIgnore option

All the files with .exe file extension are ignored to commits.
