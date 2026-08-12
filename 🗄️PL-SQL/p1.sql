SET SERVEROUTPUT ON;

PROMPT ======================
PROMPT        MENU
PROMPT ======================
PROMPT [1] Insert
PROMPT [2] Update
PROMPT [3] Delete
PROMPT ======================

DECLARE
    op       NUMBER;
    v_id     NUMBER;
    v_name   VARCHAR2(15);
    v_marks  NUMBER;

BEGIN

    op := &op;
    v_id := &no;
    v_name := '&name';
    v_marks := &markss;

    CASE op

        WHEN 1 THEN
            INSERT INTO emp
            VALUES (v_id, v_name, v_marks);

            DBMS_OUTPUT.PUT_LINE('Values are inserted.');

        WHEN 2 THEN
            UPDATE emp
            SET marks = v_marks
            WHERE id = v_id;

            DBMS_OUTPUT.PUT_LINE('Values updated.');

        WHEN 3 THEN
            DELETE FROM emp
            WHERE id = v_id;

            DBMS_OUTPUT.PUT_LINE('Values deleted.');

        ELSE
            DBMS_OUTPUT.PUT_LINE('Invalid Option');

    END CASE;

    COMMIT;

END;
/

SELECT * FROM emp;