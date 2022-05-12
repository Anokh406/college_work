from cgitb import grey
from tkinter import *
import tkinter .messagebox as tmsg
from tkcalendar import Calendar
def save_info():
    Ide_info = Ide.get()
    name_info = name.get()
    age_info = age.get()
    department_info = department.get()
    phoneno_info = phoneno.get()
    leavefrom_info=leavefrom.get() 
    leaveto_info = leaveto.get()
    leave_info=leave.get()

    if (Ide_info==0 or name_info=="" or age_info==0 or department_info =="" or phoneno_info==0 or leavefrom_info==0 or leaveto_info ==0 or leave_info==""):
        print("Invalid Try Again !!")
    else:
        print(" Ide :",Ide_info,"\n","Name :",name_info,"\n","Age :",age_info,"\n","Department :",department_info,"\n","Phone number :",phoneno_info,"\n","From Leave Day :",leavefrom_info,"\n","To Leave Day :",leaveto_info,"\n","Reason for leave :",leave_info)
    
    file = open("user.txt","w")
    
    file.write("Your Ide :" + str(Ide_info))
    
    file.write("\n")
    
    file.write("Your Name :" + name_info)
    
    file.write("\n")
    
    file.write("Your Age :" + str(age_info))

    file.write("\n")

    file.write("Your Department :" + department_info)

    file.write("\n")

    file.write("Your Phone Number :" + str(phoneno_info))

    file.write("\n")

    file.write("From Leave Day :" + str(leavefrom_info))

    file.write("\n")

    file.write("To leave Day :"+str(leaveto_info))

    file.write("\n")

    file.write("Leave Reason :" + leave_info)

    file.close()
    

app = Tk()

app.geometry("600x600")
 
app.title("Python File Handling in Forms")
 
heading = Label(text="Leave Application Form",font=("Gill Sans Ultra Bold",20))
 
heading.pack()

app.configure(background="silver")
var=IntVar()

Ide_text = Label(text="Ide :",font=("Arial Black",10))
name_text = Label(text="Name :",font=("Arial Black",10))
age_text = Label(text="Age :",font=("Arial Black",10))
department_text=Label(text="Department :",font=("Arial Black",10))
phoneno_text=Label(text="Phone Number :",font=("Arial Black",10))
leavefrom_text = Label(text="Leave from :",font=("Arial Black",10))
leaveto_text=Label(text="Leave To : ",font=("Arial Black",10))
leave_text=Label(text="Reason For Requested leave",font=("Arial Black",10))


Ide_text.place(relx=0.0,rely=0.1)
name_text.place(relx=0.0,rely=0.2)
age_text.place(relx=0.0,rely=0.3)
department_text.place(relx=0.0,rely=0.4)
phoneno_text.place(relx=0.0,rely=0.5)
leavefrom_text.place(relx=0.0,rely=0.6)
leaveto_text.place(relx=0.0,rely=0.7)
leave_text.place(relx=0.0,rely=0.8)


Ide= StringVar()
name = StringVar()
age = IntVar()
department = StringVar()
phoneno = IntVar()
leavefrom = StringVar()
leaveto = StringVar()
leave=StringVar()


Ide_entry = Entry(textvariable=Ide,width="30")
name_entry = Entry(textvariable=name,width="30")
age_entry = Entry(textvariable=age,width="30")
department_entry = Entry(textvariable=department,width="30")
phoneno_entry = Entry(textvariable=phoneno,width="30")
leavefrom_entry = Entry(textvariable=leavefrom,width="30")
leaveto_entry= Entry(textvariable=leaveto,width="30")
leave_entry = Entry(textvariable=leave,width="30")


Ide_entry.place(relx=0.5,rely=0.1)
name_entry.place(relx=0.5,rely=0.2)
age_entry.place(relx=0.5,rely=0.3)
department_entry.place(relx=0.5,rely=0.4)
phoneno_entry.place(relx=0.5,rely=0.5)
leavefrom_entry.place(relx=0.5,rely=0.6)
leaveto_entry.place(relx=0.5,rely=0.7)
leave_entry.place(relx=0.5,rely=0.8)


button = Button(app,text="Submit Data",command=save_info,width="30",height="2",font=("Arial Black",10))
button.place(relx=0.5,rely=0.9)
 
mainloop()