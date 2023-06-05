# Use the official Ubuntu image

FROM ubuntu:latest

# copy the executable file

COPY ./googletest/SWEngProject/ExecSample4 /SwengProject/ExecSample4

# lounch the executable

CMD ["/SwengProject/ExecSample4"]
#CMD ["/bin/bash"]


