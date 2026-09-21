set serveroutput on;

DECLARE
s_name Student.name%TYPE;
s_mark Student.marks%TYPE;
no int(2);
BEGIN
no:=&number;

select name,marks into s_name,s_mark from Student where rollno=no;
dbms_output.PUT_LINE('Name : ' || s_name);
dbms_output.PUT_LINE('Marks : '|| s_mark);

if s_mark > 50 then
dbms_output.PUT_LINE('Pass');
else 
dbms_output.PUT_LINE('Fail');
end if;
END;
/