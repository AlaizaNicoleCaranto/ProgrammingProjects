       IDENTIFICATION DIVISION.
       PROGRAM-ID. DATA-MOVEMENT.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WS-NUMA PIC 9(2) VALUE 10.
       01 WS-NUMB PIC 9(2) VALUE 20.

       PROCEDURE DIVISION.
           
           DISPLAY SPACE.
           DISPLAY "===================================".
           DISPLAY "        ARITHMETIC OPERATION".
           DISPLAY "===================================".
           DISPLAY "               VALUES"
           DISPLAY "-----------------------------------".
           DISPLAY "       First Number (A) : "WS-NUMA.
           DISPLAY "       Second Number (B): "WS-NUMB.
           DISPLAY "===================================". 
           ADD WS-NUMA TO WS-NUMB.
           DISPLAY "        PERFORMING ADDITION".
           DISPLAY "-----------------------------------".
           DISPLAY "       Result (B = A + B) : "WS-NUMB.
           DISPLAY "===================================".
           DISPLAY SPACE.
           STOP RUN.

