// Place operations
inline void pLin(int spd, int deg) { robot.place_left_in(spd, deg, 10); }
inline void pLout(int spd, int deg) { robot.place_left_out(spd, deg, 10); }
inline void pRin(int spd, int deg) { robot.place_right_in(spd, deg, 10); }
inline void pRout(int spd, int deg) { robot.place_right_out(spd, deg, 10); }

// Rotate operations
inline void rL(int spd, int deg) { robot.rotate(spd, -spd, -deg, 10); }
inline void rR(int spd, int deg) { robot.rotate(-spd, spd, deg, 10); }

// Rotate operations
inline void rotL(int spd, int deg) {
    robot.rotate(-spd, spd, -deg, 10);
}

inline void rotR(int spd, int deg) {
    robot.rotate(spd, -spd, deg, 10);
}

// Gyro forward operations
inline void fw_gyro(int spd ,float kp, float distance, int offset) { 
    BaseSpeed = spd;
    InitialSpeed();
    robot.fw_gyro(LeftBaseSpeed, RightBaseSpeed, kp, distance, offset); 
}

inline void fw_gyros(int spd, float kp, float distance, int offset) { 
    BaseSpeed = spd;
    InitialSpeed();
    robot.fw_gyros(LeftBaseSpeed, RightBaseSpeed, kp, distance, offset); 
}

// Gyro backward operations
inline void bw_gyro(int spd, float kp, float distance, int offset) { 
    BaseSpeed = spd;
    InitialSpeed();
    robot.bw_gyro(BackLeftBaseSpeed, BackRightBaseSpeed, kp, distance, offset); 
}

inline void bw_gyros(int spd, float kp, float distance, int offset) { 
    BaseSpeed = spd;
    InitialSpeed();
    robot.bw_gyros(BackLeftBaseSpeed, BackRightBaseSpeed, kp, distance, offset); 
}

// Line follow
inline void fline(int spd, float kp, const char* mode, char dir, char stop, int offset, const char* sensor, int opt) {
    BaseSpeed = spd;
    InitialSpeed();
    robot.fline(LeftBaseSpeed, RightBaseSpeed, kp, mode, dir, stop, offset, sensor, opt);
}

inline void bline(int spd, float kp, const char* mode, char dir, char stop, int offset, const char* sensor, int opt) {
    BaseSpeed = spd;
    InitialSpeed();
    robot.bline(BackLeftBaseSpeed, BackRightBaseSpeed, kp, mode, dir, stop, offset, sensor, opt);
}

