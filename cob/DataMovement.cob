       IDENTIFICATION DIVISION.
       PROGRAM-ID. DATA-MOVEMENT.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WS-SOURCE-VALUE PIC X(50) VALUE "Data Transfer Complete".
       01 WS-TARGET-VALUE PIC X(50) VALUE "Initial Target Value".
       01 WS-TEMP         PIC X(50) VALUE SPACES.

       PROCEDURE DIVISION.

           DISPLAY SPACE.
           DISPLAY "==========================="
           "===============================".
           DISPLAY "                  COBOL DATA MOVEMENT".
           DISPLAY "---------------------------"
           "-------------------------------".
           DISPLAY "                    BEFORE MOVE:".
           DISPLAY "  Source Value Initialized With: " WS-SOURCE-VALUE.
           DISPLAY "  Target Value Initialized With: " WS-TARGET-VALUE.
           DISPLAY "---------------------------"
           "-------------------------------".
      *    swap using a temporary variable to avoid overwriting
           MOVE WS-SOURCE-VALUE TO WS-TEMP.
           MOVE WS-TARGET-VALUE TO WS-SOURCE-VALUE.
           MOVE WS-TEMP         TO WS-TARGET-VALUE.
           DISPLAY "                    AFTER MOVE:".
           DISPLAY "  Source Value Now Holds: " WS-SOURCE-VALUE.
           DISPLAY "  Target Value Now Holds: " WS-TARGET-VALUE.
           DISPLAY "==========================="
           "===============================".
           DISPLAY SPACE.
           STOP RUN.
