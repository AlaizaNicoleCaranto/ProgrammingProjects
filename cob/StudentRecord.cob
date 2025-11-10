       IDENTIFICATION DIVISION.
       PROGRAM-ID. STUDENT-RECORD.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WS-STUDENT-ID PIC 9(10).
       01 WS-STUDENT-NAME PIC A(30).
       01 WS-STUDENT-AGE PIC 9(2).
       01 WS-STUDENT-PROGRAM PIC A(30).
       01 WS-STUDENT-YEAR PIC 9(2).
       01 WS-STUDENT-SECTION PIC X(10).      

       PROCEDURE DIVISION.
           DISPLAY SPACE.
           DISPLAY "===================================".
           DISPLAY "        STUDENT RECORD ENTRY".
           DISPLAY "===================================".
           DISPLAY "ENTER STUDENT ID: ".
           ACCEPT WS-STUDENT-ID.
           DISPLAY SPACE.
           DISPLAY "ENTER STUDENT NAME: ".
           ACCEPT WS-STUDENT-NAME.
           DISPLAY SPACE.
           DISPLAY "ENTER STUDENT AGE: ".
           ACCEPT WS-STUDENT-AGE.
           DISPLAY SPACE.
           DISPLAY "ENTER STUDENT PROGRAM: ".
           ACCEPT WS-STUDENT-PROGRAM.
           DISPLAY SPACE.
           DISPLAY "ENTER STUDENT YEAR: ".
           ACCEPT WS-STUDENT-YEAR.
           DISPLAY SPACE.
           DISPLAY "ENTER STUDENT SECTION: ".
           ACCEPT WS-STUDENT-SECTION.
           DISPLAY "===================================".
           CALL "SYSTEM" USING "clear".
           DISPLAY "=========================================".
           DISPLAY "          STUDENT RECORD DETAILS"
           DISPLAY "-----------------------------------------".
           DISPLAY "    STUDENT ID: " WS-STUDENT-ID.
           DISPLAY "          NAME: " WS-STUDENT-NAME.
           DISPLAY "       PROGRAM: " WS-STUDENT-PROGRAM.
           DISPLAY "          YEAR: " WS-STUDENT-YEAR.
           DISPLAY "       SECTION: " WS-STUDENT-SECTION.
           DISPLAY "==========================================".
           DISPLAY SPACE.
           STOP RUN.
