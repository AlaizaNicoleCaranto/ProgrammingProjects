       IDENTIFICATION DIVISION.
       PROGRAM-ID. DATA-MOVEMENT.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WS-OLD-FAVORITE  PIC X(50) VALUE"FAVORITE ANIME:"
       "MY HERO ACADEMIA".
       01 WS-NEW-FAVORITE  PIC X(50) VALUE "FAVORITE ANIME: HAIKYUU!!".
       01  WS-TEMP            PIC X(50) VALUE SPACES.

       PROCEDURE DIVISION.
           DISPLAY SPACE.
           DISPLAY "===============================================".
           DISPLAY "           ANIME FAVORITE RECORD               ".
           DISPLAY "===============================================".
           DISPLAY SPACE.

           DISPLAY " - - - - - BEFORE TRANSFER - - - - - ".
           DISPLAY "  Old Favorite : " WS-OLD-FAVORITE.
           DISPLAY "  New Favorite : " WS-NEW-FAVORITE.
           DISPLAY SPACE.

           DISPLAY "Updating your anime record...".
           DISPLAY "-----------------------------------------------".
           MOVE WS-OLD-FAVORITE TO WS-TEMP.
           MOVE WS-NEW-FAVORITE TO WS-OLD-FAVORITE.
           MOVE WS-TEMP TO WS-NEW-FAVORITE.
           DISPLAY SPACE.
           DISPLAY "- - - - - AFTER TRANSFER - - - - - ".
           DISPLAY "  Old Favorite : " WS-OLD-FAVORITE.
           DISPLAY "  New Favorite : " WS-NEW-FAVORITE.
           DISPLAY SPACE.
           DISPLAY "-----------------------------------------------".
           DISPLAY " Your anime record has been changed successfully!".
           DISPLAY "===============================================".
           STOP RUN.