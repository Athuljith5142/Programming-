set serveroutput on 
DECLARE
no int(5);
BEGIN
no:=&number;
if mod(no,2)=0 THEN
dbms_output.PUT_LINE('Even');
ELSE
dbms_output.PUT_LINE('Odd');
end if;
END;
/