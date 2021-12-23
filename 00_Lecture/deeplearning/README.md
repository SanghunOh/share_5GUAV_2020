## Deep learning
### setup tenserflow and cuda : 
- official : https://docs.nvidia.com/cuda/cuda-installation-guide-linux/index.html#post-installation-actions
- remove nvidia drive 
~$sudo apt-get purge nvidia-* && sudo apt-get purge cuda* && sudo apt autoremove  
~$sudo reboot now  
- install blog : https://nirsa.tistory.com/332  
~$ubuntu-drivers devices  
...driver   : nvidia-driver-470 - distro non-free  recommended  
...  
...  
...  
~$python -m pip install --user --upgrade tensorflow  
~$python3 -c "import tensorflow as tf; print(tf.reduce_sum(tf.random.normal([1000, 1000])))"   
... dlerror: libcudart.so.11.0 ...
