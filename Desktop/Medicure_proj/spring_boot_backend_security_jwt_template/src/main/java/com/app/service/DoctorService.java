package com.app.service;

import java.util.List;

import com.app.dto.DoctorDto;
import com.app.dto.DoctorSignup;

public interface DoctorService {
    
    DoctorSignup doctorRegistration(DoctorSignup reqDTO);
	
	List<DoctorDto> displayAllDoctor();
	
	void deleteDoctor(Long id);
	
	DoctorDto updateDoctor(Long id,DoctorDto updateDoctor);
}
