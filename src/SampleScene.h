#include <light2d/light2d.h>

class SampleScene : public light2d::objects::Scene {
public:
    SampleScene() { }
    virtual ~SampleScene() { }

    void onInit() override;

    void onRender() override;
    void onUpdate(double delta) override;

    void onDestroy() override;
};
