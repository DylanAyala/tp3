#include "Employee.h"
#include <stdlib.h>
#include <string.h>

int employee_setId(Employee* this,int id)
{
    int todoOk = 0;

    if(this!= NULL && id >0)
    {
        this->id= id;
        todoOk=1;

    }

    return todoOk;
}
int employee_getId(Employee* this,int* id)
{
    int todoOk = 0;

    if(this != NULL && id != NULL)
    {
        *id = this->id;
        todoOk=1;

    }

    return todoOk;

}


int employee_setNombre(Employee* this,char* nombre)
{

    int todoOk = 0;

    if(this!= NULL && nombre !=NULL)
    {
        strcpy(this->nombre, nombre);
        todoOk=1;

    }

    return todoOk;

}
int employee_getNombre(Employee* this,char* nombre)
{

    int todoOk = 0;

    if(this!= NULL && nombre !=NULL && strlen(nombre)>3)
    {
        strcpy(nombre, this->nombre);
        todoOk=1;

    }

    return todoOk;

}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{

    int todoOk = 0;

    if(this != NULL && horasTrabajadas > 0)
    {
        this->horasTrabajadas = horasTrabajadas;
        todoOk=1;

    }

    return todoOk;

}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int todoOk = 0;

    if(this != NULL && horasTrabajadas != NULL)
    {
        *horasTrabajadas = this->horasTrabajadas;
        todoOk=1;

    }

    return todoOk;


}

int employee_setSueldo(Employee* this,int sueldo)
{
    int todoOk = 0;

    if(this != NULL && sueldo > 0)
    {
        this->sueldo = sueldo;
        todoOk=1;

    }

    return todoOk;


}
int employee_getSueldo(Employee* this,int* sueldo)
{
    int todoOk = 0;

    if(this != NULL && sueldo != NULL)
    {
        *sueldo = this->sueldo;
        todoOk=1;

    }

    return todoOk;



}

Employee* employee_new()
{
    Employee* this= (Employee*) malloc(sizeof(Employee));

    if(this != NULL)
    {
        this->id=0;
        strcpy(this->nombre,"");
        this->horasTrabajadas=0;
        this->sueldo=0;
    }

    return this;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{

    Employee* this;
    int todoOka=0;


    if(idStr!=NULL && nombreStr !=NULL && horasTrabajadasStr != NULL && sueldoStr !=NULL)
    {
        this = employee_new();
        if(this != NULL)
        {
            if(employee_setId(this, atoi(idStr)) && employee_setNombre(this, nombreStr) &&
                    employee_setHorasTrabajadas(this, atoi(horasTrabajadasStr)) && employee_setSueldo(this, atoi(sueldoStr)))
            {
                todoOka=1;
            }
        }
    }
    if(todoOka){
        free(this);
    }

    return this;
}

