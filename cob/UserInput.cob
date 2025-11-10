       IDENTIFICATION DIVISION.
       PROGRAM-ID. ACCEPT-TWO-NUMBERS.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WS-NUM1 PIC 9(5).
       01 WS-NUM2 PIC 9(5).

       PROCEDURE DIVISION.
           DISPLAY SPACE.
           DISPLAY "===================================".
           DISPLAY "      ACCEPT TWO NUMBERS INPUT".
           DISPLAY "==================================="
           DISPLAY "ENTER FIRST NUMBER: ".
           ACCEPT WS-NUM1.
           DISPLAY SPACE.
           DISPLAY "ENTER SECOND NUMBER: ".
           ACCEPT WS-NUM2.
           DISPLAY "===================================".
           CALL "SYSTEM" USING "clear".
           DISPLAY "===================================".
           DISPLAY "            INPUT SUMMARY".
           DISPLAY "-----------------------------------".
           DISPLAY "          Inputs Received:".
           DISPLAY "          "WS-NUM1 " And  " WS-NUM2.
           DISPLAY "-----------------------------------".
           DISPLAY "            First: " WS-NUM1.
           DISPLAY "           Second: " WS-NUM2.
           DISPLAY "===================================".
           DISPLAY SPACE.
           STOP RUN.
