DECLARE
    n NUMBER := -5;
BEGIN
    IF n > 0 THEN
        DBMS_OUTPUT.PUT_LINE('Positive');

    ELSIF n < 0 THEN
        DBMS_OUTPUT.PUT_LINE('Negative');

    ELSE
        DBMS_OUTPUT.PUT_LINE('Zero');
    END IF;
END;
/