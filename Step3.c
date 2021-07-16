#include <linux/device.h>

struct device *pdev;
struct class *pclass; 

int i=0;

pclass = class_create(THIS_MODULE, "pseudo_class");
pdev = device_create(pclass, NULL, pdevid, NULL, "psample%d", i);

device_destroy(pclass, pdevid); 
class_destroy (pclass);