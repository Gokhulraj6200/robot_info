class HydraulicSystemMonitor {
public:
  HydraulicSystemMonitor() {
    hydraulic_oil_temperature = "45C";
    hydraulic_oil_tank_fill_level = "100%";
    hydraulic_oil_pressure = "250 bar";
  }

  std::string getTemp() { return hydraulic_oil_temperature; }
  std::string getLevel() { return hydraulic_oil_tank_fill_level; }
  std::string getPressure() { return hydraulic_oil_pressure; }

protected:
  std::string hydraulic_oil_temperature, hydraulic_oil_tank_fill_level,
      hydraulic_oil_pressure;
};