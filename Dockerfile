# Use the official Ubuntu image

FROM ubuntu:latest

# copy the executable file

COPY managefile /SwengProject/managefile
COPY input.txt /SwengProject/input.txt
COPY output.txt /SwengProject/output.txt

# lounch the executable

CMD ["/SwengProject/managefile /SwengProject/input.txt /SwengProject/output.txt"]
#CMD ["/bin/bash"]


