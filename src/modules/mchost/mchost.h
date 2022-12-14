#ifndef MC_HOST_H
#define MC_HOST_H

#include <ArduinoJson.h>
#include <TFT_eSPI.h>
#include <TJpg_Decoder.h>
#include <ESP8266HTTPClient.h>
#include "../mcwifi/mcwifi.h"

#include "../../img/host/i0.h"
#include "../../img/host/i1.h"
#include "../../img/host/download.h"
#include "../../img/host/upload.h"
#include "../../img/astronaut/i0.h"

#define TIME_GAP_INFO 2000

struct HostInfo {
  int cpuData;
  int memData;
  String netUploadData;
  String netDownloadData;
};

class McHost {
  private:
    HostInfo hostInfo;
    bool hasInited;
    int timestampInfo;
    void drawAst();
    void drawInfo();
    void fetchInfo();
    void updateInfo();
  public:
    McHost();
    void init();
    void update();
};

# endif