import numpy as np
import matplotlib.pyplot as plt


def plot_4_channel_signal(file_name):
    signals = np.loadtxt(file_name)
    
    plt.figure(figsize = (16, 6))
    for i in range(signals.shape[1]):
      plt.plot(signals[:,i], label = 'signal'+str(i))
    plt.legend(loc = 'best')

plot_4_channel_signal('sig4ChannelWithMedianFilter.txt')

#After creating the filtered output in file: sig4Channel_filtered.txt, run:
# plot_4_channel_signal('sig4Channel_filtered.txt')