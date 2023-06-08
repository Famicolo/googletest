# Use the official Ubuntu image

FROM ubuntu:latest

# copy the executable file

COPY managefile ./project/managefile
COPY input.txt ./project/input.txt
#COPY output.txt ./project/output.txt

# lounch the executable

#CMD ["/bin/bash"]
#CMD["cd project"]
#CMD ["./project/managefile ./project/input.txt ./project/output.txt"]
#CMD ["cat ./project/output.txt"]


