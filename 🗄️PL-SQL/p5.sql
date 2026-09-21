set serveroutput on;
declare
cursor c1 is 
select * from emp;
total number :=0;
begin
for i in c1
loop
total:=total+1;
dbms_output.put_line('Id = ' || i.ID || ' Name : '|| i.name );
end loop;

dbms_output.put_line(total);
end;
/