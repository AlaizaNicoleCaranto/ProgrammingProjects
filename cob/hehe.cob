       IDENTIFICATION DIVISION.
       PROGRAM-ID. ACCEPT-STRING.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 USER-INPUT PIC A(50).

       PROCEDURE DIVISION.
           DISPLAY "".
           DISPLAY "=========================".
           DISPLAY "Please enter a string:".
           ACCEPT USER-INPUT.
           DISPLAY "-------------------------".
           DISPLAY "You entered: " USER-INPUT.
           DISPLAY "=========================".
           DISPLAY SPACE.
           STOP RUN.
