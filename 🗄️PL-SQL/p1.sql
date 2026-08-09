PROMPT ======================
PROMPT        MENU
PROMPT ======================
PROMPT [1] Insert
PROMPT [2] Update
PROMPT [3] Delete
PROMPT ======================

SET SERVEROUTPUT ON;

DECLARE
    op    NUMBER;
    id    NUMBER;
    name  VARCHAR2(15);
    marks NUMBER;

BEGIN
    -- DBMS_OUTPUT.PUT_LINE('[1] Insert Values');
    -- DBMS_OUTPUT.PUT_LINE('[2] Update Values');

    op := &op;
    id := &no;
    name := '&name';
    marks := &markss;
    
    CASE op
        WHEN 1 THEN
            INSERT INTO emp VALUES (id, name, marks);
            DBMS_OUTPUT.PUT_LINE('Values are inserted.');

        WHEN 2 THEN
            UPDATE emp
            SET marks = marks
            WHERE id = id;

            DBMS_OUTPUT.PUT_LINE('Values updated.');

        ELSE
            DBMS_OUTPUT.PUT_LINE('Invalid Option');
    END CASE;

    COMMIT;
END;
/

SELECT * FROM emp;