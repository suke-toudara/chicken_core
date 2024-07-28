from ultralytics import YOLO

model = YOLO('yolov10m.pt')
model.export(format='onnx')