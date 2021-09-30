#include <light2d/light2d.h>
#include "SampleScene.h"

int main(int argc, char** argv) {
    
    SampleScene* sampleScene = new SampleScene();

    light2d::core::SimpleApplication app = light2d::core::SimpleApplication("SimpleApplication", 854, 480);

    app.init();

    app.run(sampleScene);

    app.destroy();

    delete sampleScene;

    return 0;
}