# Use the official Ubuntu image

FROM ubuntu:latest

# copy the executable file

COPY managefile managefile
COPY input.txt input.txt
COPY output.txt output.txt

# lounch the executable

#CMD ["./managefile input.txt output.txt"]
CMD ["/bin/bash"]


