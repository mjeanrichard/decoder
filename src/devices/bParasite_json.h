const char* _bParasite_json = R""""(
{
   "brand":"bParasite",
   "model":"bParasite v1",
   "model_id":"bpara1",
   "condition":["uuid", "index", 0, "181a"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 12, 2]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 14, 2]
      }
   }
})"""";

const char* _bParasite_json_props = R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";
