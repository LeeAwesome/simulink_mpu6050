
set MATLAB=C:\Program Files\MATLAB\R2021b

"%MATLAB%\bin\%MATLAB_WIN_VER%\gmake" -f simulink_mpu6050_model.mk  GENERATE_ASAP2=0 OPTS="-DTID01EQ=0"
